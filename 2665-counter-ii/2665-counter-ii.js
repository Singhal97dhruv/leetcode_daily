/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

class Counter{
    constructor(init){
        this.init=init;
        this.currCount=init;
    }
    increment(){
        this.currCount++;
        return this.currCount;
    }
    decrement(){
        this.currCount--;
        return this.currCount;
    }
    reset(){
        this.currCount=this.init;
        return this.currCount;
    }
}

var createCounter = function(init) {
    return new Counter(init);
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */