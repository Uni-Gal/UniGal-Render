# Render源代码
## Windows怎么编译
### 前置要求
1. 下一个[Visual Studio](visualstudio.microsoft.com)安装引导程序  
2. 双击打开安装  
3. 组件勾上C++桌面，语言包至少勾上英文  
4. 到[Releases · microsoft/vcpkg](https://github.com/microsoft/vcpkg/releases)下一个最新的zip
5. 按照[说明](https://github.com/microsoft/vcpkg/blob/master/README_zh_CN.md#%E5%BF%AB%E9%80%9F%E5%BC%80%E5%A7%8B-windows)装好vcpkg  
6. 随便一个什么终端中输入`.\vcpkg.exe install pugixml:x64-windows pugixml:x86-windows`

### 正式开始
1. 打开Src\UniGal-DiagramRender.sln
2. 最上面一排有个`生成（B）`，点一下
3. 点`生成解决方案`，坐等编译完成
4. `输出 - 生成输出`显示编译结果
