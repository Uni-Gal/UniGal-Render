#include "Head.hpp"
#include "pugixml.hpp"

using namespace std;



extern fstream STYLE_FILE;

string FormatString(string str)
{
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
	str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
	return str;
}

int StylePicker(Style StyleSheet)
{
	pugi::xml_document STYLE_FILE;
	pugi::xml_parse_result result = STYLE_FILE.load_file("StyleSheet.unigal");
	string background_exist_str = FormatString(STYLE_FILE.select_single_node("/stylesheet/background/background-exist/text()").node().value());
	string background_fillcolor_str = FormatString(STYLE_FILE.select_single_node("/stylesheet/background/background-fillcolor/text()").node().value());
	string background_opacity_str = FormatString(STYLE_FILE.select_single_node("/stylesheet/background/background-fillopacity/text()").node().value());
	cout << "[background_exist_str] = [" << background_exist_str << "]" << endl;
	cout << "[background_fillcolor_str] = [" << background_fillcolor_str << "]" << endl;
	//关于Color的读入格式问题，以及可变关键词问题，建议等Script那边整理好以后，一并单独独立出来作为全UniGal的一个Code Of Conduct
	cout << "[background_opacity_str] = [" << background_opacity_str << "]" << endl;
	
	bool background_exist_bool;
	Color background_fillcolor_color;
	float background_opacity_float;
	//转换为对应类型
	//写入
	StyleSheet.setBackgroundStyle(background_exist_bool, background_fillcolor_color, background_opacity_float);


	//重复多次，先读后写，直到把背景、框架、节点、文字，箭头全都读取成功。

	cout << "开始解析脚本，若需要编译成目标语言则输入1，不需要编译成目标语言则输入0" << endl;

	return 0;
}
