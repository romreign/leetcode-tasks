class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0)
            return "";
        int n = strs.length;
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