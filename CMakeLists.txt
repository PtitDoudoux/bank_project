cmake_minimum_required(VERSION 3.7)
project(bank_project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        app/accounts.c
        app/admnistration.c
        app/customers.c
        app/history.c
        core/include/base.h
        core/libs/bcrypt/crypt_blowfish/crypt.h
        core/libs/bcrypt/crypt_blowfish/crypt_blowfish.c
        core/libs/bcrypt/crypt_blowfish/crypt_blowfish.h
        core/libs/bcrypt/crypt_blowfish/crypt_gensalt.c
        core/libs/bcrypt/crypt_blowfish/crypt_gensalt.h
        core/libs/bcrypt/crypt_blowfish/ow-crypt.h
        core/libs/bcrypt/crypt_blowfish/wrapper.c
        core/libs/bcrypt/bcrypt.c
        core/libs/bcrypt/bcrypt.h
        core/libs/libcsv/csv.h
        core/libs/libcsv/libcsv.c
        core/utils.c
        libraries.xml
        main.c
        Readme.md app/operations.c core/file.c)

add_executable(bank_project ${SOURCE_FILES})