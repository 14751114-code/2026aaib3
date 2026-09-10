//week01-3.cpp 學習計畫Basic 第3題
//LeetCode 28.Find the Index of the First Occurrence in a String
//大海撈針 (在一堆稻草裡找到一隻針)
//寫程式,只要會三個東西:if(判斷) for(迴圈) 函式
class Solution {
public:
    int strStr(string haystack, string needle) {
        //找到字串的長度length()函式
        int N1 = haystack.length(), N2 = needle.length();
        for(int i=0; i<=N1-N2; i++){
            if(haystack.substr(i, N2) == needle) return i;
        }
        return -1;
    }
};
