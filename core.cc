#include <iostream>
#include <string>

#include "player.hpp"

/*
カード
ゲームマネジメント
プレイヤー(auto)
*/
/*
コマンドライン引数
command -ps ファイル名
*/

int main(int argc, char *argv[]) {
  std::string playerstrategyfilename;

  playerstrategyfilename = argv[1];
  
  Player player;

  return 0;
}