// class {
// public:  
//     bool isper_sqr(int n){
//                     int root=sqrt(n);
//                     if(root*root==n) return true;
//                     else return false;

//     }
//     bool judgeSquareSum(int c) {
//         int x=0;
//         int y=c;
//         while(x<=y){
//             if(isper_sqr(x) && isper_sqr(y)) return true;
//             else if(!isper_sqr(y)){
//                 y=(int)sqrt(y)*(int)sqrt(y);
//                 x=c-y;
//             }
//             else if(!isper_sqr(x)){
//                 x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
//                 y=c-x;
//             }

            
//         }
//         return false;
//     }
// };