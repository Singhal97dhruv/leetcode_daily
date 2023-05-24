/**
 * @param {object} obj1
 * @param {object} obj2
 * @return {object}
 */
const objDiff = (sourceObj, targetObj) => {
     if (sourceObj === targetObj) return {};

    if (sourceObj === null || targetObj === null) return [sourceObj, targetObj];
    if (typeof sourceObj !== 'object' || typeof targetObj !== 'object') return [sourceObj, targetObj];
    if (Array.isArray(sourceObj) !== Array.isArray(targetObj)) return [sourceObj, targetObj];

    const diffObj = {}; 

    Object.keys(sourceObj).forEach(key => {
        if (key in targetObj) {
            const subDiff = objDiff(sourceObj[key], targetObj[key]); 

            if (Object.keys(subDiff).length > 0) {
                diffObj[key] = subDiff;
            }
        }
    });

    return diffObj; 
};