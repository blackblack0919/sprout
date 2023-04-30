#include "splendor.hpp"

void ai(Pos& pos1, Pos& pos2) {
  // TODO: Task 4.
  // You should remove the code below and determine the four values by yourself.
  Gem my_board[BOARD_HEIGHT][BOARD_WIDTH];
  for(int i=0;i<BOARD_HEIGHT;++i){
    for(int j=0;j<BOARD_WIDTH;++j){
      my_board[i][j]=get_gem({i, j});
    }
  }
  for(int i=0;i<BOARD_HEIGHT;++i){
    for(int j=0;j<BOARD_WIDTH;++j){
      Pos tmp1={i, j};
      Pos tmp2={i, j+1};
      if(check_swap(tmp1, tmp2)){
        if(my_board[i][j].ability==ABI_BOMB || my_board[i][j+1].ability==ABI_BOMB){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }
        else if(my_board[i][j].ability==ABI_KILLSAME || my_board[i][j+1].ability==ABI_KILLSAME){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }
        else if(my_board[i][j+1].ability==ABI_CROSS && my_board[i][j+1].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i+2][j].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }
        else if(my_board[i][j+1].ability==ABI_CROSS && my_board[i-1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i+1][j].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }
        else if(my_board[i][j+1].ability==ABI_CROSS && my_board[i-2][j].type==my_board[i-1][j].type && my_board[i-1][j].type==my_board[i][j+1].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }//分隔線
        else if(my_board[i][j].ability==ABI_CROSS && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+2][j+1].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }
        else if(my_board[i][j].ability==ABI_CROSS && my_board[i-1][j+1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }
        else if(my_board[i][j].ability==ABI_CROSS && my_board[i-2][j+1].type==my_board[i-1][j+1].type && my_board[i-1][j+1].type==my_board[i][j].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i;
          pos2.y=j+1;
          return;
        }
      }
    }
  }
  for(int i=0;i<BOARD_HEIGHT;++i){
    for(int j=0;j<BOARD_WIDTH;++j){
      Pos tmp1={i, j};
      Pos tmp2={i+1, j};
      if(check_swap(tmp1, tmp2)){
        if(my_board[i][j].ability==ABI_BOMB || my_board[i+1][j].ability==ABI_BOMB){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }
        else if(my_board[i][j].ability==ABI_KILLSAME || my_board[i+1][j].ability==ABI_KILLSAME){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }
        else if(my_board[i][j].ability==ABI_CROSS && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+1][j+2].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }
        else if(my_board[i][j].ability==ABI_CROSS && my_board[i][j].type==my_board[i+1][j-1].type && my_board[i+1][j-1].type==my_board[i+1][j+1].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }
        else if(my_board[i][j].ability==ABI_CROSS && my_board[i+1][j-2].type==my_board[i+1][j-1].type && my_board[i+1][j-1].type==my_board[i][j].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }//分隔線
        else if(my_board[i+1][j].ability==ABI_CROSS && my_board[i+1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i][j+2].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }
        else if(my_board[i+1][j].ability==ABI_CROSS && my_board[i][j-1].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j+1].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }
        else if(my_board[i+1][j].ability==ABI_CROSS && my_board[i][j-2].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i+1][j].type){
          pos1.x=i;
          pos1.y=j;
          pos2.x=i+1;
          pos2.y=j;
          return;
        }
      }
    }
  }
  for(int i=0;i<BOARD_HEIGHT;++i){
    for(int j=0;j<BOARD_WIDTH;++j){
      Pos tmp1={i, j};
      Pos tmp2={i, j+1};
      if(check_swap(tmp1, tmp2)){
        Pos check1={i, j+3};
        Pos check2={i-2, j};
        Pos check3={i+2, j};
        Pos check4={i, j-2};
        Pos checks={i-1, j};
        Pos checkp={i+1, j};
        if(check_inboard(check1) && check_inboard(check2)){
          if(my_board[i-2][j+1].type==my_board[i-1][j+1].type && my_board[i-1][j+1].type==my_board[i][j].type && my_board[i][j].type==my_board[i][j+2].type && my_board[i][j+2].type==my_board[i][j+3].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
        }
        if(check_inboard(check1) && check_inboard(check3)){
          if(my_board[i+2][j+1].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i][j].type && my_board[i][j].type==my_board[i][j+2].type && my_board[i][j+2].type==my_board[i][j+3].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
        }
        if(check_inboard(check2) && check_inboard(check4)){
          if(my_board[i-2][j].type==my_board[i-1][j].type && my_board[i-1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i][j-2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
        }
        if(check_inboard(check3) && check_inboard(check4)){
          if(my_board[i+2][j].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i][j-2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
        }
        if(check_inboard(check1) && check_inboard(checks) && check_inboard(checkp)){
          if(my_board[i-1][j+1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i][j+2].type && my_board[i][j+2].type==my_board[i][j+3].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
        }
        if(check_inboard(check4) && check_inboard(checks) && check_inboard(checkp)){
          if(my_board[i-1][j].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i][j-2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
        }
        Pos check5={i+2, j};
        Pos check6={i-2, j};
        if(check_inboard(check5) && check_inboard(check6)){
          if(my_board[i-2][j].type==my_board[i-1][j].type && my_board[i-1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i+2][j].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }//五個
          if(my_board[i-2][j+1].type==my_board[i-1][j+1].type && my_board[i-1][j+1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+2][j+1].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }//五個
          if(my_board[i-2][j].type==my_board[i-1][j].type && my_board[i-1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i+1][j].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
          if(my_board[i-1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i+2][j].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
          if(my_board[i-2][j+1].type==my_board[i-1][j+1].type && my_board[i-1][j+1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
          if(my_board[i-1][j+1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+2][j+1].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i;
            pos2.y=j+1;
            return;
          }
        }
      }
    }
  }
  for(int i=0;i<BOARD_HEIGHT;++i){
    for(int j=0;j<BOARD_WIDTH;++j){
      Pos tmp1={i, j};
      Pos tmp2={i+1, j};
      if(check_swap(tmp1, tmp2)){
        Pos check1={i, j+2};
        Pos check2={i-2, j};
        Pos check3={i+3, j};
        Pos check4={i, j-2};
        Pos checks={i, j+1};
        Pos checkp={i, j-1};
        if(check_inboard(check1) && check_inboard(check2)){
          if(my_board[i-2][j].type==my_board[i-1][j].type && my_board[i-1][j].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i][j+2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
        }
        if(check_inboard(check1) && check_inboard(check3)){
          if(my_board[i+3][j].type==my_board[i+2][j].type && my_board[i+2][j].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+1][j+2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
        }
        if(check_inboard(check2) && check_inboard(check4)){
          if(my_board[i-2][j].type==my_board[i-1][j].type && my_board[i-1][j].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i][j-2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
        }
        if(check_inboard(check3) && check_inboard(check4)){
          if(my_board[i+3][j].type==my_board[i+2][j].type && my_board[i+2][j].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j-1].type && my_board[i+1][j-1].type==my_board[i+1][j-2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
        }
        if(check_inboard(check3) && check_inboard(checks) && check_inboard(checkp)){
          if(my_board[i+1][j-1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+2][j].type && my_board[i+2][j].type==my_board[i+3][j].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
        }
        if(check_inboard(check2) && check_inboard(checks) && check_inboard(checkp)){
          if(my_board[i-2][j].type==my_board[i-1][j].type && my_board[i-1][j].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i][j+1].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
        }
        Pos check5={i, j+2};
        Pos check6={i, j-2};
        if(check_inboard(check5) && check_inboard(check6)){
          if(my_board[i][j-2].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i][j+2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }//五個
          if(my_board[i+1][j-2].type==my_board[i+1][j-1].type && my_board[i+1][j-1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+1][j+2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }//五個
          if(my_board[i][j-2].type==my_board[i][j-1].type && my_board[i][j-1].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j+1].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
          if(my_board[i][j-1].type==my_board[i+1][j].type && my_board[i+1][j].type==my_board[i][j+1].type && my_board[i][j+1].type==my_board[i][j+2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
          if(my_board[i+1][j-2].type==my_board[i+1][j-1].type && my_board[i+1][j-1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
          if(my_board[i+1][j-1].type==my_board[i][j].type && my_board[i][j].type==my_board[i+1][j+1].type && my_board[i+1][j+1].type==my_board[i+1][j+2].type){
            pos1.x=i;
            pos1.y=j;
            pos2.x=i+1;
            pos2.y=j;
            return;
          }
        }
      }
    }
  }
  for(int i=0;i<BOARD_HEIGHT;++i){
    for(int j=0;j<BOARD_WIDTH;++j){
      Pos tmp1={i, j};
      Pos tmp2={i, j+1};
      Pos tmp3={i+1, j};
      if(check_swap(tmp1, tmp2)){
        pos1.x=i;
        pos1.y=j;
        pos2.x=i;
        pos2.y=j+1;
        return;
      }
      if(check_swap(tmp1, tmp3)){
        pos1.x=i;
        pos1.y=j;
        pos2.x=i+1;
        pos2.y=j;
        return;
      }
    }
  }
  return;
}
