#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

//data plans, socisl bundles, balance check, roaming/intl, borrowcerdit/rechar, gift data, video packs, hot deals, chatzigi
int option1, option2, option3, option4, option5, option6, option7 ;

void menu(){
	cout<<"................................................\n";
	cout<<"1. Data Plans\n";
	cout<<"2. Social Bundles\n";
	cout<<"3. Balance Check\n";
	cout<<"4. Roaming/Intl\n";
	cout<<"5. Borrow Credit/Recharge\n";
	cout<<"6. Gift Data\n";
	cout<<"7. Video Packs\n";
	cout<<"8. Hot Deals\n";
	cout<<"9. Chat Zigi\n\n";
	cout<<"Select Option\n";
}

void DataPlans()
{
	cout<<"1. Daily\n";
	cout<<"2. Weekly\n";
	cout<<"3. Monthly\n";
	cout<<"4. 2-3 month\n";
	cout<<"5. Always ON plans\n";
	cout<<"6. Mifi plans\n";
	cout<<"7. Family packs\n";												//we could loop it using do while (code == 131 && option != 10)
	cout<<"8. Hot deals\n";
	cout<<"9. FREE youtube\n";
	cout<<"10. Manage data\n";
	cout<<"11. Pulse tuesday offer\n";
	cout<<"00. back\n\n";
	cout<<"Option"<<endl;
	cin>>option1;
}


void SocialBundles()
{
	cout<<"1. Whatsapp\n";
	cout<<"2. Facebook\n";
	cout<<"3. Instagram\n";
	cout<<"4. Tiktok\n";
	cout<<"5. Ayoba\n";
	cout<<"6. All social bundles\n";
	cout<<"7. YouTube Instagram and Tiktok\n";
	cout<<"8. Opera Mini and News\n";
	cout<<"9. Social Mega Bundle\n";
	cout<<"10. 2GO\n";
	cout<<"11. WeChat\n";
	cout<<"13. Eskimi\n";
	cout<<"13. Back\n\n";
	cout<<"Option"<<endl;
	cin>>option2;
}


void BalanceCheck()
{
	cout<<"your balance\n";
}


void Roaming()
{
	cout<<"1. Roaming Data Bundles\n";
	cout<<"2. Roaming Voice + Data Bundles\n";
	cout<<"3. Free Incoming Roaming call\n";
	cout<<"4. Int'l Calling Bundle\n";
	cout<<"5. Roaming Balance Check\n\n";
	cout<<"Option"<<endl;
	cin>>option3;
}


void Borrow()
{
	cout<<"1. Borrow Airtime\n";
	cout<<"2. Borrow Data\n";
	cout<<"3. Recharge\n";						////set airtime balance to a default no maybe 0.00 so as you recharge, it reflects
	cout<<"0. Back\n\n";
	cout<<"Option"<<endl;
	cin>>option4;
}


void GiftData() 
{
	cout<<"1. Transfer from Data Balance\n";
	cout<<"2. Buy for a Friend\n";
	cout<<"3. Request from a Friend\n";
	cout<<"4. View Pending Request\n";
	cout<<"0. Back\n";
	cout<<"00. MainMenu\n\n";
	cout<<"Option"<<endl;
	cin>>option5;
}
	

void VideoPacks()
{
	cout<<"Video Streaming Packs\n";
	cout<<"1. Youtube Video Packs\n";
	cout<<"2. StarTimes Video Packs\n";
	cout<<"3. 1GB (Youtube Only) + 500MB (Data Access) \n";
	cout<<"4. Showmax Mobile\n\n";
	cout<<"Option"<<endl;
	cin>>option6;
}


void HotDeals()
{
	cout<<"1. TopDeal4Me\n";
	cout<<"2. Data4Me\n";
	cout<<"3. Recharge4Me\n";
	cout<<"4. Combo4Me\n";
	cout<<"5. VAS4Me\n";
	cout<<"Option\n";
	cin>>option7;
}


void Zigi()
{
	cout<<"Yello! Need help, chat with Zigi on your preferred Channel\nWhatsapp: ";
}

int main()
{
	bool cancel = 0, send = 1;
	int option;
	string code;
	
	
	do {
	cin>>code;
	
	
	menu();
	
	cin>>option;
	system("cls");
	
	switch (option){
		case 1: {
			DataPlans();
			system("cls");
			
			
				switch (option1)
				{
				case 1:
					cout<<"nice try";
					break;
				case 2: 
					cout<<"nicertry";
					break;
				
				default:
					break;
					
					
					
				}
			break;
			}
		case 2: {
			SocialBundles();
			system("cls");
			break;
		}
		case 3: {
			BalanceCheck();
			system("cls");
			break;
		}
		case 4: {
			Roaming();
			system("cls");
			break;
		}
		case 5: {
			Borrow();
			system("cls");
			break;
		}
		case 6: {
			GiftData();
			system("cls");
			break;
		}
		case 7: {
			VideoPacks();
			system("cls");
			break;
		}
		case 8: {
			HotDeals();
			system("cls");
			break;
		}
		case 9: 
		{
			Zigi();
			system("cls");
			break;
		}
	default: 
		cout<<"Invalid Code\n";
	}
		
} while (code == "*131#" && option != 10);

	return 0;
}
