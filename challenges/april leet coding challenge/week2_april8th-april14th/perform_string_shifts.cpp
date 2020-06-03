
 class Solution {
    public String stringShift(String s, int[][] shift) {
       if (s.length()<2) return s;

		int rCnt = 0, lCnt = 0;

		for (int[] sArr : shift) {
			if (sArr[0] == 0)
				lCnt += sArr[1];
			else
				rCnt += sArr[1];
		}
        
		if (rCnt == lCnt)
			return s;

		if (rCnt > lCnt) {
			rCnt = rCnt - lCnt;
			rCnt = rCnt % s.length();
			return s.substring(s.length()-rCnt) + s.substring(0, s.length()-rCnt);
		} else {
			lCnt = lCnt - rCnt;
			lCnt = lCnt % s.length();
			return s.substring(lCnt) + s.substring(0,lCnt);
		}
    }
}