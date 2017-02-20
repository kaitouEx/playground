/*配列*/

#include <stdio.h>

int main(void)
{
  int array[] = {43, 63, 6, 85, 9, -4};
  int i;

  for(i = 0; i < sizeof(array) / sizeof(array[0]); i++){
    printf("array[%d]=%d\n", i, array[i]);
  }
  return 0;
}





/*
［  ローカル変数  ］
関数の中で宣言された変数。仮引数の変数も同様。
その関数が終わると捨てられ、再度関数が呼ばれた時には新しく作られる。
また、他の関数から使用することは出来ない。
［  スコープ  ］
識別子が有効な範囲を制限する仕組みの総称。一般的には、変数の寿命と有効範囲を決定する仕組み。

{正確にはブロック内!!!}

［  グローバル変数  ］
関数外で宣言された変数。プログラム全体が終了するまで生き残り続け、宣言されたソースファイル内の全ての関数から使用出来る。
グローバル変数は、プログラムの開始時に自動的に0に初期化されるのです。
プログラム全体で共有する特別なデータだけに使います。

グローバル変数と同名のローカル変数ではローカル変数が優先されるのです。

static int count; 静的なローカル変数
*/
