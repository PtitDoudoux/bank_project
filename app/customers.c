#include <base.h>
#include <csv.h>
#include <bcrypt.h>

/**
 * Structure who represent a client in the CSV DB
 */
struct Customers {
  int id;
  char* lastname[20];
  char* firstname[20];
  char* job[50];
  char* tel_num[10];
  char* password[60];
};

/**
 * Function for adding a client in the CSV DB
 * @param Customers client : The client to be added
 * @return void : Return a message about the status of the action executed
 */
void add_customer(char* firstname[20], char* lastname[20], char* job[50], char* tel_num[10], char* password[60]) {
    struct Customers client;
    client.firstname = firstname;
    client.lastname = lastname;
    client.job = job;
    client.tel_num = tel_num;
    // client.password = ;
}

/**
 * Function for deleting a client in the CSV DB
 * @param int id : The id of the client to be deleted
 * @return void : Return a message about the status of the action executed
 */
void delete_customer(int id) {

}

/**
 * Function for deleting a client in the CSV DB
 * @param int id : The id of the client to be modified
 * @return void : Return a message about the status of the action executed
 */
void modify_client(int id) {

}
