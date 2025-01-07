void LINEAR_SEARCH(int arr, int n,int VAL){
    int I = 0;
    int POS = -1;
    while (I<N){
        if (arr[I] == VAL){
            POS = I;
            cout<<POS;
            break;
        }
        I++;
        if POS == -1{
            cout<<"Value is not present in the array";
        }
    }
}                                                           