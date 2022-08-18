# DungeonRush
这是 [DungeonRush](https://github.com/rapiz1/DungeonRush) 的一个 fork。

## 改进点
1. 保存 ip 地址，省却每次都要重新输入。
2. 将 PvP 改成了合作模式。

## 环境准备
```shell
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake mingw-w64-x86_64-pkg-config mingw-w64-x86_64-make mingw-w64-x86_64-gdb 
pacman -S mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_ttf mingw-w64-x86_64-SDL2_mixer mingw-w64-x86_64-SDL2_image mingw-w64-x86_64-SDL2_net
wget https://github.com/Rapiz1/DungeonRush/releases/download/v1.0-alpha/win-${{matrix.arch}}-lib.tar.gz
tar xzf win-x86_64-lib.tar.gz
mv win-x86_64-lib/* bin
```