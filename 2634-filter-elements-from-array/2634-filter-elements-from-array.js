/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let res=[];
    arr.forEach((x,i)=>{
        if(fn(x,i)){
            res.push(x);
        }
    })
    return res;
};