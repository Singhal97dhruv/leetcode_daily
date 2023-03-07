class Solution {
    public int[] deckRevealedIncreasing(int[] deck) {
        Queue<Integer>q=new LinkedList<>();
        Arrays.sort(deck);
        int n=deck.length;
        int[] res=new int[n];
        for(int i=0;i<n;i++)q.add(i);
        for(int i=0;i<n;i++){
            res[q.poll()]=deck[i];
            q.add(q.poll());
        }
        return res;
    }
}