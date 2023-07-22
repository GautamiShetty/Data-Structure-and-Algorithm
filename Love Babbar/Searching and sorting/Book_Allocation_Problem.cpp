class Book_Allocation_Problem{

    public:
        int findPages(vector<int> &arr, int n, int m)
        {
            int start = 0;
            int sum = 0;
            int mid = 0;
            int end = 0;
            int ans = 0;
            for(int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            end = sum;

            while(start <= end)
            {
                mid = start + (end - start)/2;
                if(isPossible(arr, n , m, mid))
                {
                    ans = mid;
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }

            }
            return ans;
        }

        bool isPossible(vector<int>& vec, int n, int m, int mid)
        {
            int totalPage = 0;
            int studentCount = 0;

            for(int i = 0; i < n; i++)
            {
                if(totalPage + arr[i] <= mid)
                {
                    totalPage = totalPage + mid;
                }
                else{
                    studentCount++;
                    if(studentCount > m || mid < arr[i])
                    {
                        return false;
                    }
                    totalPage = arr[i];
                }
            }
            return true;
        }
};