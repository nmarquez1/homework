class Heap(){
    private:
    Heap() {};
    static void sink(Comparable[] pq,int k ,int n){
        int j = 2*k;
        if (j < n && less(pq,j,j+1)){j++;}
        if(!less(pq,k,j)){break;}
        exch(pq,k,j);
        k=j;
    }
    static boolean less(Comparable[] pq, int i , int j){
        return pq[i-1].compareTo(pq[j-1])<0;
    }
    static void exch(Object[] pq, int i, int j){
        Object swap = pq[i-1];
        pq[i-1] = pq[j-1];
        pq[j-1] = swap;
    }
    static voide show(Comparable[] a){
        for(int i = 0; i<a.length(); i++){
            std::cout << a[i];
        }
    }

    public:
    static void sort(Comparable pq){
        int n = pq.length;
        for (int k = n/2; k>=1l k--){
            sink(pq,k,n)
        }
        while(k>1){
            exch(pq,1,k--);
            sink(pq,1,k);
        }
    }

}
