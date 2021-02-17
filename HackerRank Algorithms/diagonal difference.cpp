/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int count_left=0,count_right=0;
    for(int i=0;i<arr.size();i++){
        count_left+=arr[i][i];
        count_right+=arr[i][arr.size()-1-i];
    }
    if(count_left>count_right)
        return count_left-count_right;
    return count_right-count_left;
}
