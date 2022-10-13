bool isPossible(vector<int>& arr) {
        int n = arr.size(); // extract the size of the array
        
        // declaring map to store frequency
        unordered_map<int, int> frequency; 
        
        for(int i = 0; i < n; i++) // traverse in the array
        {
            frequency[arr[i]]++; // store frequency
        }
        
        // defining anthor map which will tell us whether is there any
        // subsequence which is ending with a particular number
        unordered_map<int, int> numberEndingWith;
        
        // traverse into the array
        for(int i = 0; i < n; i++)
        {
            // if frequency is zero, that means we are already using 
            // this element in any other subsequence, so move to 
            // next element
            if(frequency[arr[i]] == 0)  
            {
                continue;
            }
            
            // we will use this element now, so decrease it's frequency
            frequency[arr[i]]--; 
            
            int prevElement = arr[i] - 1; // previous element
            int justNext = arr[i] + 1; // next element
            int justNextPlusOne = arr[i] + 2; // next second element
            
            // Is there any coming subsequence that is ending with
            // previous element, 
            // if yes, then append this current element 
            // and update that, now this current element will
            // act as ending with element
            if(numberEndingWith[prevElement] > 0)
            {
                // so decrease freq of prev ele
                numberEndingWith[prevElement]--; 
                
                // and this current ele becomes ending with
                numberEndingWith[arr[i]]++; 
            } // else we want to stat a new subsequence with this curr ele, so
            else if(frequency[justNext] > 0 && frequency[justNextPlusOne] > 0)
            {
                // so if just next is present as well as 
                // just Next PlusOne is also present so 
                // decrease there freuqencies and update the 
                // case number ending with
                frequency[justNext]--;                       
                frequency[justNextPlusOne]--;
                
                numberEndingWith[justNextPlusOne]++;
            }
            else  // else return false
            {
                return false;
            }
        }
        
        // if we are able to put all elements into a valid cofiguration
        // then return true
        return true;
    }
};
