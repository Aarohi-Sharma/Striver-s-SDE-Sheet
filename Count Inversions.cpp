int n=nums.size();
long long count=0;
      for(int i=0; i<n-1; i++){
          for(int j=i+1; j<n; j++){
              if(nums[i]>nums[j]) count++;
          }
      }
return count;
