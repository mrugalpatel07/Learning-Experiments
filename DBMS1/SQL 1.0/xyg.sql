create database xyz;
use xyz;

create table xygemployess(
id int not null unique,
name varchar(25) not null,
employeid int not null unique,
joiningdate date not null,
salary int not null,
post varchar(50) not null,
city varchar(25) not null);

select id,name,employeid,salary,post,city from xygemployess;

alter table Employees modify xygemployess VARCHAR(50);


SELECT DATE_FORMAT(NOW(), '%Y-%m-%d') from xygemployess;

insert into xygemployess values(1,'mrugal patel',101,'2019-03-27',250000,'full stack devloper','ahemdabad');
insert into xygemployess values(2,'jay patel',102,'2024-02-12',30000,'frontend devloper','ahemdabad');
insert into xygemployess values(3,'krima patel',104,'2024-02-22',45000,'backend devloper','ahemdabad');
insert into xygemployess values(4,'hemal patel',001,'2025-05-12',200000,'data scientist','pune');
insert into xygemployess values(5,'vivek pate',106,'2024-10-12',30000,'cyber security','ahemdabad');
insert into xygemployess values(6,'yash parmar',108,'2025-02-01',35000,'security','surat');
insert into xygemployess values(7,'nisarg prajapti',109,'2020-12-25',30000,'hardwear intern','pune');
insert into xygemployess values(8,'krishi pate',004,'2024-04-14',40000,'backend devloper','mumbai');
insert into xygemployess values(9,'muskan patel',201,'2025-03-22',10000,'SALES','ahemdabad');
insert into xygemployess values(10,'shreya dandich',202,'2024-02-19',20000,'HR','mumbai');
insert into xygemployess values(11,'devansh shah',112,'2022-05-18',35000,'marketing','ahemdabad');


select*from xygemployess;

