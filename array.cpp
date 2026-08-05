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

    // ::::::::::::::::::::::::::::::::::::::::OPTIMALSOLUTION:::::::::::::::::::::::::::::::::::::


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


/////////////////////////////////////Union of two sorted arrays//////////////////////////////


        // BRUTE FORCE APPROACH
//        int n=nums1.size();
//        int m =nums2.size();
//        set<int> st;
//        for(int i=0;i<n;i++){
// st.insert(nums1[i]);
//        }
//        for(int i=0;i<m;i++){
//         st.insert(nums2[i]);
//        }
//        vector<int>vrr;
//        for (auto x:st){
//         vrr.push_back(x);
//        }
// return vrr;

// :::::::::::::::::::::::::::::::::OPTIMALAPPROACH:::::::::::::::::::::::::::::::::::::

// int i=0;
// int j=0;
// int n=nums1.size(); 
// int m =nums2.size();
// vector<int> unionArray;
// while (i<n && j<m){
//     if (nums1[i]<=nums2[j]){
//         if (unionArray.size()==0 || unionArray.back()!=nums1[i]){
//             unionArray.push_back(nums1[i]);
//         }
//         i++;
//     }
//     else{
//         if (unionArray.size()==0 || unionArray.back()!=nums2[j]){
//             unionArray.push_back(nums2[j]);
//         }
//         j++;
//     }
// }
// while(i<n){

//         if ( unionArray.back()!=nums1[i]){
//             unionArray.push_back(nums1[i]);
//         }
//         i++;
    
// }
// while(j<m){
      
//         if (unionArray.back()!=nums2[j]){
//             unionArray.push_back(nums2[j]);
//         }
//         j++;
    
// }
// return unionArray;


/////////////////////////////////////////FIND MISSING NUMBER/////////////////////////////////////////

// ::::::::::::::::::::::::::::::::::::::::::BRUTE FORCE:::::::::::::::::::::::::::::::::::::::::::::::::

//  sort(nums.begin(),nums.end());
//         int n=nums.size();
//         int i=0;
//         int j=0;
//         while(i<n){

//        if (i!=nums[i]){
//          j=i;
//          break;
//        }
//        else {
//         if (i==n-1){
//             j=i+1;
//         }



// :::::::::::::::::::::::::::::::::::::::Find the number that appears once, and other numbers twice.::::::::::::::::::::::::::::::::::::


// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {


/////////////////////////////////////BRUTE FORCE APPROACH///////////////////////////////

//         // int n =nums.size();
//         // int a;
//         // for (int i=0;i<=n-1;i++){
//         //     int count=0;
//         //     for (int j=0;j<=n-1;j++){
//         //         if (nums[i]==nums[j]){
//         //             count ++;
//         //         }
//         //     }
//         //     if(count==1){
//         //         a=nums[i];
//         //         break;
//         //     }
//         // }
//         // return a;

// //////////////////////////////////OPTIMAL APPROACH//////////////////////////////////////
        
//     // int ans=0;
//     // for (int i=0;i<=nums.size()-1;i++){
//     //     ans =ans ^ nums[i];
//     // }
//     // return ans;

//     }
// };




// ::::::::::::::::::::::::::::::::
// 169. Majority Element::::::::::::::::::::::::::::::::::::::::::::::




// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
// // BRUTE FORCE

// //                 int n=nums.size();
     
// //         int a;
// //         for (int i=0;i<n;i++){
// //      int count=0;
// // for(int j=i+1;j<n;j++){
    
// // if (nums[i]==nums[j]){
// //     count++;
// //     if (count==n/2){
// //          a= nums[i];
// //          break;
// //     }
// // }
// // }
// //         }if (n==1){a=nums[0];
// //         return a;
// //         }else {
// //         return a;}

// //OPTIMAL APPROACH

// // unordered_map<int,int> un;
// // int n=nums.size();
// // int a;
// // for (int i=0;i<n;i++){
// //     un[nums[i]]=un[nums[i]]+1;
// // }
// // for (auto x:un){
// // if(x.second>n/2){
// // a=x.first;
// // break;
// //     }
// // }
// // return a;

//     }
// };



// :::::::::::::::::::::::::::REMOVE DUPLICATE ELEMENTS::::::::::::::::::::::::

// class Solution {
// public:
//     // Function to remove duplicates from sorted array in-place
//     int removeDuplicates(vector<int>& nums) {
//         // If array is empty, return 0 directly
//         if (nums.empty()) return 0;

//         // Pointer for the position of last unique element
//         int i = 0;

//         // Traverse the array starting from the second element
//         for (int j = 1; j < nums.size(); j++) {
//             // If current element is different from last unique element
//             if (nums[j] != nums[i]) {
//                 // Move pointer for unique element forward
//                 i++;
//                 // Place the new unique element at the next position
//                 nums[i] = nums[j];
//             }
//         }

//         // i is index of last unique element, count = i + 1
//         return i + 1;
//     }
// };
