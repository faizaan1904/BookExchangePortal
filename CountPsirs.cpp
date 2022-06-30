int getPairsCount(int arr[], int n, int k) {
        // code here
        int c=0;
        /*for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int s=arr[i]+arr[j];
                if(s==k)
                    c++;
            }
        }
        return c;*/
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(int i=0;i<n;i++){
            c+=m[k-arr[i]];
            if(k-arr[i]==arr[i]){
                c--;
            }
        }
        return c/2;
    }
