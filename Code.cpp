vector<int> find(int arr[], int n , int x )
{
    int first = -1, last = -1;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            first = i;
            break;
        }
    }
    for(int i = n - 1; i > -1; i--) {
        if(arr[i] == x) {
            last = i;
            break;
        }
    }
    vector<int> ans{first, last};
    return ans;
}
