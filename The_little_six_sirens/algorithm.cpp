#include <iostream>
#include <string>
using namespace std;
//小六壬法算法程序
int solve_yushu(int number){
    return number < 7 ? number : number % 6;
}

void getUserInput(int& month, int& day, int& clock) {
    cout << "请输入阴历月份（阿拉伯数字）：" << endl;
    cin >> month;

    cout << "请输入阴历日期（阿拉伯数字）：" << endl;
    cin >> day;

    cout << "请输入阴历时辰（阿拉伯数字）：" << endl;
    cin >> clock;
}

void displayResult(int answer) {
    switch(answer)
    {
    case 1:
        cout<<"大安;身不动时，属青龙木，凡谋事一五七（属四肢)贵人西南，冲犯东方，小孩婆姐六畜惊，大人青面阴神。断曰;大安事事昌，求财在坤方，失物去不远，宅舍保安康。行人身未动，病者主无妨将军回田野，仔细兴推祥。"<<endl;
        break;
    
    case 3:
        cout<<"速喜;人便至时，属朱雀火，凡谋三六九《属心脑)贵人西南，，冲犯南方，小孩婆姐动勿惊，大人火箭将军。断曰;速喜喜来临，求财向南行，失物申未午，逢人路上寻，官事有福德，病者无祸侵，田宅六畜吉，行人有喜音。"<<endl;
        break;

    case 5:
        cout<<"小吉;人来喜时，属六合木，几求谋一五七(属肝肠广贵人西南，冲犯东方，小孩婆姐六畜惊，大人无主家神。断曰;小吉最吉昌，路上好商量，阴人来报喜,失物在坤方，行人立便至，交易甚是强，凡是皆和合，病者辱上苍。"<<endl;
        break;

    case 2:
        cout<<"留连;人未归时，属玄武水，凡谋事二八千(属肾胃)贵人南方，冲犯北方，小孩游路亡魂，大人乌面夫人。断曰;留连事难成，求谋月未明，凡事只宜缓去者未回程;失物南方见，急讨方称心,更须防口舌，人口且太平。"<<endl;
        break;

    case 4:
        cout<<"赤口;官事凶时，属白虎金，凡谋四七十《属肺胃)贵人东方，冲凡西方，小孩迷魂童子，大人金神七煞。断曰;口主口舌，官非切要防，失物急去寻，行人有惊慌。六畜多惊怪，病者出西方更须防诅咒，恐怕染瘟疫。"<<endl;
        break;

    case 6:
        cout<<"空亡:音信稀时，属勾陈土，凡谋三六九《属脾脑)贵人北方，冲犯厝地，小孩土瘟神煞，大人土压夫人。断曰;空亡事不祥，阴人多乖张，求财无利益，行人有灾秧，失物寻不见，官事有刑伤病人逢暗鬼，镶解保安康。"<<endl;
        break;

    default:
        break;
    }
}

int main(){
    system("chcp 65001");
    int month, day, clock;
    getUserInput(month, day, clock);
    int dex = solve_yushu(month) + solve_yushu(day) - 1 + solve_yushu(clock) - 1;
    int answer = solve_yushu(dex);
    displayResult(answer);
    system("pause");
    return 0;
}