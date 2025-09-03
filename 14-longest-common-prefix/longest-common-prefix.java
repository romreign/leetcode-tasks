class Solution {
    public String longestCommonPrefix(String[] strs) {
        int n = strs.length;
        if (n == 0)
            return "";
        StringBuffer strBuffer = new StringBuffer(strs[0]);

        for (int i = 1; i < n; i++) {
            if (strBuffer.length() > strs[i].length())
                strBuffer.setLength(strs[i].length());
            int k = 0, l = strBuffer.length();

            while(k < l) {
                if (strBuffer.charAt(k) != strs[i].charAt(k))
                    if (k == 0)
                        return "";
                    else {
                        strBuffer.setLength(k);
                        break;
                    }
                if (strBuffer.charAt(k) == strs[i].charAt(k))
                    k++;
            }
        }
        return strBuffer.toString();
    }
}