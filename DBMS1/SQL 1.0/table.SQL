create schema sql_class;

create table sql_class.student
(
id int not null unique,
name varchar(25)not null,
std int not null,
percentage float not null
);

describe student;

describe employe;
alter table student rename to employe;
alter table employe rename column name to employe_name;
alter table employe_name modify employe_name varchar(30);
alter table employe drop column employe_name;
alter table employe add column name varchar(25) not null;

drop table employe


