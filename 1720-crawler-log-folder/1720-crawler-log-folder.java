class Solution {
    public int minOperations(String[] logs) {
       Stack<String> st= new Stack<>();
        for(int i =0 ; i<logs.length; i++){
            if(logs[i].equals("../") ){
                if(!st.isEmpty())
                    st.pop();
            }
            else if(!logs[i].equals("./")){
                st.push(logs[i]);
            }
        }
        int cnt=0;
        while(!st.isEmpty()){
            System.out.print(st.pop());
            cnt++;
        }
        return cnt;
    }
}