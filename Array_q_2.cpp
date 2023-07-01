//Ninja And The Second Order Elements

int secondlargest(vector<int>&a,int n){
    int largest=a[0];
    int s_largest=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            s_largest=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>s_largest)
        {
            s_largest=a[i];
        }
        
    }
    return s_largest;
}


int secondsmallest(vector<int>&a,int n){
    int smallest=a[0];
    int s_smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            s_smallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<s_smallest)
        {
            s_smallest=a[i];
        }
        
    }
    return s_smallest;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
     int slargest= secondlargest(a,n);
    int ssmallest= secondsmallest(a,n);

    return {slargest, ssmallest};
}
