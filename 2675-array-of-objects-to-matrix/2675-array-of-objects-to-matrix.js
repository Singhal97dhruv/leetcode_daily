/**
 * @param {Array} arr
 * @return {Matrix}
 */
var jsonToMatrix = function(arr) {
    arr = arr.map(objFlat);
    const keys = [...new Set(arr.map(Object.keys).flat())].sort();

    const res = Array(arr.length+1).fill().map(() => []);
    res[0] = keys; 

    for(let i=0; i<arr.length; ++i) {
        for(let j=0; j<keys.length; ++j) {
            const k = keys[j], v = arr[i][k]; 
            res[i+1][j] = (v !== undefined) ? v : "";
        }
    }

    return res;


    function objFlat(obj) {
        const res = [];
        for(const key of Object.keys(obj)) {
            const val = obj[key]

            if(val === null || typeof val !== "object") {
                res[key] = val;
            } else {
                const child = objFlat(val);
                for(const k of Object.keys(child)) {
                    res[`${key}.${k}`] = child[k]; 
                }
            }
        }
        return res;
    }
};