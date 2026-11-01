#include<stdio.h>
// merge-2d-arrays
// Merge Two 2D Arrays by Summing Values
// Easy
// LeetCode
// You are given two 2D integer arrays nums1 and nums2. Each array contains pairs [id_i, val_i] where id_i is a unique identifier and val_i is its associated value. Both arrays are sorted in ascending order by id. Merge the two arrays into one array that is sorted by id, following these rules:

// Include only ids that appear in at least one array.
// Each id should appear exactly once, with its value being the sum of the values from both arrays (if an id is missing from an array, treat its value as 0). Return the resulting array sorted by id.
// EXAMPLES
// The worked examples come from this problem’s test cases, which need an account.

// Sign in
// CONSTRAINTS
// 1 <= nums1.length, nums2.length <= 200
// nums1[i].length == nums2[j].length == 2
// 1 <= id_i, val_i <= 1000
// Both arrays contain unique ids.
// Both arrays are sorted in strictly ascending order by id.

