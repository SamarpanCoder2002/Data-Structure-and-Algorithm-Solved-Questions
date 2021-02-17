/*
Sample Input

6
Sample Output

     #
    ##
   ###
  ####
 #####
######

*/

void staircase(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=i;j>=1;j--)
            cout<<"#";
        cout<<"\n";
    }
}
