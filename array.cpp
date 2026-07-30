// MOVE THE ZEROS TO THE END OF THE ARRAY 

//   void moveZeroes(vector<int>& nums) {
    //:::::::::::::::::::::::::::::::::::::::::// BRUTE-FORCE CODE:::::::::::::::::::::::::::::::::::::

    //      vector<int> temp;
       
    //     for (int i=0;i<nums.size();i++){
    //         if(nums[i]!=0){
    //             temp.push_back(nums[i]);
    //         }
    //     }
    //     for (int i=0;i<temp.size();i++){
    //         nums[i]=temp[i];
            
    //     }
    //     for(int i=temp.size();i<nums.size();i++){
    //         nums[i]=0;
    //     }
         
    // }

    // ::::::::::::::::::::::::::::::::::::::::: OPTIMAL SOLUTION ::::::::::::::::::::::::::::::::::::::


//  ::::::::::::::::::::::::::::::::::::::::::::::OPTIMAL SOLUTION::::::::::::::::::::::::::::::::::::::   

//          int i=0;
//          int j=i+1;
// int n=nums.size();
// while(j<n && i<n && n>1){
//     if (nums[i]==0 && nums[j]!=0){
//         swap(nums[j],nums[i]);
//         i++;j++;
//     }
//    else if(nums[j]!=0&&nums[i]!=0){
//       j++;i++;
//     }
//     else if(nums[i]!=0){
//         i++;
//     }else if(nums[j]==0){
//         j++;
//     }
// }