#include <memory.h>
#include "../core/include/base.h"
#include "../core/libs/libcsv/csv.h"
#include "../core/libs/bcrypt/crypt_blowfish/crypt_blowfish.h"


/**
 * Structure who represent a client in the CSV DB
 */
struct Customers {
  int id;
  char lastname[20];
  char firstname[20];
  char job[50];
  char tel_num[10];
  char password[60];
};

/**
 * Function for adding a client in the CSV DB
 * @param firstname The firstname of the customer
 * @param lastname The lastname of the customer
 * @param job The job of the customer
 * @param tel_num The telephone number of the customer
 * @param password The password of the customer
 * @return void Return a message about the status of the action executed
 */
void add_customer(char firstname[20], char lastname[20], char job[50], char tel_num[10], char password[60]) {
    struct Customers client;
    strcpy(client.firstname, firstname);
    strcpy(client.lastname, lastname);
    strcpy(client.job, job);
    strcpy(client.tel_num, tel_num);
    // client.password = ;
}

/**
 * Function for deleting a client in the CSV DB
 * @param id The id of the client to be deleted
 * @return void Return a message about the status of the action executed
 */
void delete_customer(int id) {

}

/**
 * Function for deleting a client in the CSV DB
 * @param id The id of the client to be modified
 * @return void Return a message about the status of the action executed
 */
void modify_client(int id) {

}
