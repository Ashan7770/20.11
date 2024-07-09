#include <iostream>
#include <vector>
#include "Dir.h"
#include<string.h>
#include <memory>

#include<unistd.h>
#include<sys/socket.h>
#include<netinet/in.h>

#define MESSAGE_LENGTH 1024 // ������������ ������ ������ ��� ������
#define PORT 7777 // ����� ������������ ���� ����� �����
using namespace std;
struct Message
{
	string word;
	string name;
};

struct sockaddr_in serveraddress, client;
socklen_t length;
int sockert_file_descriptor, connection, bind_status, connection_status;
//char message[MESSAGE_LENGTH];

using namespace std;

int main() {
	system("chcp 1251");
	Message* message = new Message;

	// �������� �����
	sockert_file_descriptor = socket(AF_INET, SOCK_STREAM, 0);
	if (sockert_file_descriptor == -1) {
		std::cout << "Socket creation failed.!" << std::endl;
		exit(1);
	}
	// 
	serveraddress.sin_addr.s_addr = htonl(INADDR_ANY);
	// ������� ����� ����� ��� �����
	serveraddress.sin_port = htons(PORT);
	// ���������� IPv4
	serveraddress.sin_family = AF_INET;
	// �������� �����
	bind_status = bind(sockert_file_descriptor, (struct sockaddr*)&serveraddress,
		sizeof(serveraddress));
	if (bind_status == -1) {
		:cout << "Socket binding failed.!" << endl;
		exit(1);
	}
	// �������� ������ �� ����� ������ 
	connection_status = listen(sockert_file_descriptor, 5);
	if (connection_status == -1) {
		cout << "Socket is unable to listen for new connections.!" << endl;
		exit(1);
	}
	else {
		std::cout << "Server is listening for new connection: " << endl;
	}
	length = sizeof(client);
	connection = accept(sockert_file_descriptor, (struct sockaddr*)&client, &length);
	if (connection == -1) {
		cout << "Server is unable to accept the data from client.!" << endl;
		exit(1);
	}
	// Communication Establishment
	while (1) {
		bzero(message, sizeof(Message));
		read(connection, message, sizeof(Message));
		if (message->word == "end") {
			cout << "Client Exited." << endl;
			cout << "Server is Exiting..!" << endl;
			break;
		}
		cout << "Data received from client: " << message->word << " " << message->name << endl;
		bzero(message, sizeof(Message));
		
	const char* ee1;
	ee1 = "                           << LagaetCat >>";
	frag* m1 = new frag;
	int q = 0, w = 0, ych = 0, e = 0, v = 0, klych = 0, klych1 = 1, klych2 = 1, klych3 = 1, klych4 = 1, klych5 = 1, klych7 = 1, popyutka, pod = 0, tigr = 0, triger = 0;
	const int a = 99, b = 99, c = 99, d = 9999, t = 99;
	string  chatdialog[d], zapomnik[t];

	vector<string>maslogin, masparol, masimy;
	string m, ma, prop0, prop1, prop2, prop3, vvodlog, vvodpar, vvodchat, dok, slovo, * pomni, rrt;
	do {
		m1->setDan1(ee1);
		cin >> ma;
		if (ma == "����������") {
			klych2 = 0;
		}
		else if (ma == "����") {
			cout << "����������." << endl;
			return 0;
		}
		else if (ma == "��������") {
			m1->setDan5(ee1);
			klych2 = 1;
		}
		else {
			m1->setDan3(ee1);
		}
	} while (1 == klych2);
	do {
		m1->setDan2(ee1, maslogin.size());
		cin >> prop0;
		if ("�����" == prop0) {
			popyutka = 3;
			if (ych == 0) {
				m1->setDan4(ee1);
				prop1 = "�";
			}
			else if (ych != 0) {
				cout << "\n��� �����:" << endl;
				cin >> vvodlog;
				cout << "\n������:" << endl;
				cin >> vvodpar;
				cout << "\n�����...." << endl;
				int i = 0;
				do {
					if (vvodlog == maslogin[i]) {
						q = i;
						w = i;
						m1->setDan6(ee1);
						do {
							if (vvodpar == masparol[q]) {
								do {
									cout << "���� ��������, " << masimy[w] << ", � ����� ����.          ��������� ������:" << endl;
									for (int w = 0; w < ych; w++) {
										cout << "\n                                                 " << masimy[w] << endl;
									}
									m1->setDan7(ee1);
									cin >> message->word;
									message->word = vvodchat;

									if (vvodchat == "��������") {
										m1->setDan8(ee1);
										dok = " ";
										tigr = 0;
										do {
											if (pod != 0) {

												for (int e = 0; e <= triger; e++, v++) {

													if (e < triger) {
														cout << zapomnik[v] << " �����: " << chatdialog[e] << endl;
													}
													else {
														pod = 0;
													}
												}
											}
											else if (pod == 0) {
												for (int e = triger; e <= triger;) {
													cout << " ��: " << endl;
													cin >> slovo;
													if (e > 9999) {
														m1->setDan9(ee1);

														abort();
													}
													if (slovo != "�����") {
														chatdialog[e] = slovo;
														dok = slovo;
														triger++;
														pomni = &masimy[w];
														zapomnik[v] = *pomni;
														e++;
														v++;
													}
													else if (slovo == "�����") {
														pod = 1;
														e = (1 + triger);
														v = 0;
														dok = "�����";
														klych7 = 1;
														klych5 = 1;
														klych4 = 1;
													}
												}
											}
										} while ("�����" != dok);
									}
									else if (vvodchat == "�����") {
										klych4 = 1;
										klych5 = 1;
										klych7 = 1;
									}
									else {
										m1->setDan10(ee1);

										klych7 = 0;
									}
								} while (0 == klych7);
							}
							else if (vvodpar != masparol[q] && q <= ych && popyutka >= 1) {
								cout << "�� ������ ������. ������� ��� ���.  (���� �������: " << popyutka << endl;
								popyutka -= 1;
								cin >> vvodpar;
								klych5 = 0;
							}
							else {
								m1->setDan11(ee1);

								klych4 = 1;
								klych5 = 1;
							}
						} while (klych5 == 0);
					}
					else if (i <= ych && vvodlog != masparol[i]) {
						cout << i << " " << ych << endl;
						++i;
						klych4 = 0;
					}
					else {
						m1->setDan12(ee1);

						klych4 = 1;
					}
				} while (klych4 == 0);
			}
			prop1 = "�";
		}
		else if ("�����������" == prop0 && ych < 99) {
			do {
				int i = ych;
				cout << "������� �����: " << endl;
				cin >> m;
				message->name = m;
				maslogin.push_back(m);
				cout << "���������......" << endl;
				klych1 = 1;
				if (0 != ych) {
					for (int i = 0; i < ych; i++) {
						if (m != maslogin[i] && klych1 == 1) {
							klych1 = 1;
						}
						else if (m == maslogin[i]) {
							cout << "����� � ����� ������ ����������: " << m << endl;
							m1->setDan13(ee1);

							klych1 = 0;
							do {
								cin >> prop2;
								if ("����������" == prop2) {
									klych3 = 1;
									prop1 = "�";
								}
								else if ("�����" == prop2) {
									klych3 = 1;
									prop1 = "�";
								}
								else {
									m1->setDan14(ee1);

									klych3 = 0;
								}
							} while (klych3 == 0);
						}
					}
				}
				else if (0 == ych) {
					cout << "����� ��������: " << m << endl;
					klych1 = 1;
				}
				else {
					cout << "����� Y�� ��������: " << m << endl;
					klych1 = 0;
					prop1 = "�";
				}
				if (1 == klych1) {

					maslogin[i] = m;
					q = ych;
					w = ych;
					cout << "����� ������: " << maslogin[i] << endl;
					prop1 = "�";
					cout << "������� ������: " << endl;
					cin >> rrt;
					masparol.push_back(rrt);


					q++;
					cout << "������� ���: " << endl;
					cin >> rrt;
					masimy.push_back(rrt);
					w++;
					ych++;
				}
			} while ("�" == prop1);
		}
		else if ("�����������" == prop0 && ych > 98) {
			m1->setDan15(ee1);
			prop1 = "�";
		}
		else if ("�����" == prop0) {
			m1->setDan17(ee1);
			cout << "����������." << endl;
			return 0;
		}
		else {
			m1->setDan16(ee1);
			cout << "������. ���������� ������� ������." << endl;
			prop1 = "�";
		}
		if (maslogin.size() == 99) {
			abort();
			cout << "������. ��� �����" << endl;
		}
	} while ("�" == prop1);
	masimy[w] = nullptr;
	masparol[q] = nullptr;
	chatdialog[e] = nullptr;
	delete m1;
	ssize_t bytes = write(connection, message, sizeof(Message));
	// ���� �������� >= 0  ����, ������ ��������� ������ �������
	if (bytes >= 0) {
		cout << "Data successfully sent to the client.!" << endl;
	}
	}
	delete message;
	// ��������� �����, ��������� ����������
	close(sockert_file_descriptor);
	return 0;
}