 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            /*set<int>s;
            for(int i=0;i<n1;i++){
                for(int j=0;j<n2;j++){
                    if(A[i]==B[j]){
                        for(int k=0;k<n3;k++){
                            if(B[j]==C[k]){
                                s.insert(C[k]);
                            }
                        }
                    }
                }
            }
            for(auto it=s.begin();it!=s.end();it++)
                ans.push_back(*(it));*/
            map<int,int> m;
            set<int> s1;
            set<int> s2;
            set<int> s3;
            for(int i=0;i<n1;i++)
                s1.insert(A[i]);
            for(int i=0;i<n2;i++)
                s2.insert(B[i]);
            for(int i=0;i<n3;i++)
                s3.insert(C[i]);
            for(auto it=s1.begin();it!=s1.end();it++)
                m[*(it)]++;
            for(auto it=s2.begin();it!=s2.end();it++)
                m[*(it)]++;
            for(auto it=s3.begin();it!=s3.end();it++)
                m[*(it)]++;
            for(auto it:m){
                if(it.second==3){
                    ans.push_back(it.first);
                }
            }
            return ans;
        }
