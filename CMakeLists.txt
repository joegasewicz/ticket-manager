cmake_minimum_required(VERSION 3.21)
project(ticket_manager)

set(CMAKE_CXX_STANDARD 17)

### Dependencies ###
#-- Installing: /usr/local/lib/cmake/SqliteOrm/SqliteOrmConfig.cmake
#-- Installing: /usr/local/lib/cmake/SqliteOrm/SqliteOrmConfigVersion.cmake
#-- Installing: /usr/local/include/sqlite_orm
#-- Installing: /usr/local/include/sqlite_orm/sqlite_orm.h
#-- Installing: /usr/local/lib/cmake/SqliteOrm/SqliteOrmTargets.cmake
find_package(SqliteOrm REQUIRED)

add_executable(
        ticket_manager
        main.cpp
        ticket_manager.h ticket_manager.cpp
        db_conn.cpp db_conn.h
)
target_link_libraries(ticket_manager sqlite_orm::sqlite_orm)