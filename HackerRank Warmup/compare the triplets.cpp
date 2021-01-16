// Complete the compareTriplets function below.
/*
a = [1, 2, 3]
b = [3, 2, 1]
For elements *0*, Bob is awarded a point because a[0] .
For the equal elements a[1] and b[1], no points are earned.
Finally, for elements 2, a[2] > b[2] so Alice receives a point.
The return array is [1, 1] with Alice's score first and Bob's second.
*/

vector<int> compareTriplets(vector<int> a, vector<int> b) {
        int count_a=0,count_b=0;
        vector <int> result;
        for(int i=0;i<a.size();i++){
            if(a[i]>b[i])
                count_a++;
            else if(a[i]<b[i])
                count_b++;
        }

        result.push_back(count_a);
        result.push_back(count_b);
        return result;
}

