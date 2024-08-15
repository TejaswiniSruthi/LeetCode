class Solution {
    public boolean lemonadeChange(int[] bills) {
        int[] change = new int[]{0,0,0};
        for(int i:bills){
            System.out.print(i+" -> ");
            if(i==5){
                change[0]+=1;
            }
            else if(i==10){
                change[1]+=1;
                if(change[0]>0){
                    change[0]-=1;
                }
                else{
                    return false;
                }
            }
            else{
                change[2]+=1;
                if(change[0]>0 && change[1]>0){
                    change[0]-=1;
                    change[1]-=1;
                }
                else if(change[0]>=3){
                    change[0]-=3;
                }
                else{
                    return false;
                }
            }
            System.out.print(change[0]+" ");
            System.out.print(change[1]+" ");
            System.out.println(change[2]);
        }
        return true;
    }
}