use db1;


CREATE TABLE emp(
  empno    int,
  ename    nVARCHAR(10),
  job      nVARCHAR(9),
  mgr      INT,
  hiredate DATE,
  sal      DECIMAL(7,2),
  comm     DECIMAL(7,2),
  deptno   INT,
  CONSTRAINT pk_emp PRIMARY KEY (empno),
  constraint fk_deptno foreign key (deptno) references dept(deptno)
);

CREATE TABLE salgrade(
  grade int,
  losal int,
  hisal int
);

CREATE TABLE dept(
  deptno int,
  dname  nVARCHAR(14),
  loc    nVarchar(13),
  CONSTRAINT pk_dept PRIMARY KEY (deptno));

INSERT INTO emp VALUES(
 7839, 'KING', 'PRESIDENT', null,
 convert(datetime,'1981-11-17'),
 5000, null, 10);

INSERT INTO emp VALUES(
 7698, 'BLAKE', 'MANAGER', 7839,
 ('1-5-1981'),
 2850, null, 30);

INSERT INTO emp VALUES(
 7782, 'CLARK', 'MANAGER', 7839,
 '9-6-1981',
 2450, null, 10);

INSERT INTO emp VALUES(
 7566, 'JONES', 'MANAGER', 7839,
 ('2-4-1981'),
 2975, null, 20);

INSERT INTO emp VALUES(
 7788, 'SCOTT', 'ANALYST', 7566,
('13-JUL-87'),
 3000, null, 20);

INSERT INTO emp VALUES(
 7902, 'FORD', 'ANALYST', 7566,
('3-12-1981'),
 3000, null, 20 );

INSERT INTO emp VALUES(
 7369, 'SMITH', 'CLERK', 7902,
 convert(datetime,'1980-12-17'),
 800, null, 20 );

INSERT INTO emp VALUES(
 7499, 'ALLEN', 'SALESMAN', 7698,
 ('1981-2-20'),
 1600, 300, 30);

INSERT INTO emp VALUES(
 7521, 'WARD', 'SALESMAN', 7698,
 ('1981-2-22'),
 1250, 500, 30 );

INSERT INTO dept VALUES(10, 'ACCOUNTING', 'NEW YORK');
INSERT INTO dept VALUES(20, 'RESEARCH', 'DALLAS');
INSERT INTO dept VALUES(30, 'SALES', 'CHICAGO');
INSERT INTO dept VALUES(40, 'OPERATIONS', 'BOSTON');

select * from emp;

select * from salgrade;


use db1;
1.select * from emp where sal>1000 and sal<2000;

2.select deptno,dname from dept order by dname;

3.select job from emp group by job;

4. select  * from emp where deptno in(10,20) order by  ename;

5. select ename  from emp where job='CLERK' and deptno=20;

6.select ename from emp where ename like '%LL%' or ename like '%TH%' ;

7.select * from emp where mgr is not null;

8.select ename,sal+isnull(comm,0) "total remuneration" from emp ;

9.select ename,sal*12,comm from emp where sal>isnull(comm,0) order by sal desc,ename desc;

10.select ename,round(sal+sal*0.15,2),concat(ename,job) "ename + job" from emp;

11.select job  as "salesperson" from emp where job='SALESMAN' and deptno=30;

12.select job,min(sal) "min sal",max(sal) " max sal" from emp group by job;

13.select count(distinct(mgr)) "tot mgr" from emp;

14.select job,avg(sal) "avg sal",sum(sal+isnull(comm,0)) "total remuneration" from emp group by job;

15.select max(sal)-min(sal) "diff btwn sal" from emp;
 
16. select dname,deptno  from dept where deptno in(select deptno from emp group by deptno having count(ename)>3 );

select * from salgrade;
select * from emp;

17.select  count(distinct(ename)) "distinct",count(ename) "ename" from emp;

18.select * from emp where sal in(select min(sal) from emp group by mgr having min(sal)<1000) and mgr is not null order by sal;

19. select ename,dname from emp,dept where emp.deptno=dept.deptno order by dname;

20. select ename,dname,emp.deptno from emp,dept where emp.deptno=dept.deptno;

21.select ename,loc,dname,sal from emp,dept where emp.deptno=dept.deptno and sal>1500;

use db1;
22.select ename,sal,grade from emp,salgrade where sal  between losal and hisal and grade=3;

23.select ename,loc from emp,dept where emp.deptno=dept.deptno and loc='DALLAS';

24.select ename,job,sal,grade,dname from emp,dept,salgrade where  emp.deptno=dept.deptno and sal between losal and hisal and job!='CLERK' order by sal desc;
use db1;
25.select * from emp where sal*12=36000 or job='CLERK';

26.select dname,deptno from dept where deptno not in(select deptno from emp);

27.select * from emp e where sal=(select max(sal) from emp where e.job=emp.job);

28.select  max(hiredate) "recent",deptno from emp group by deptno  order by recent;

29.select count(*) "count",avg(sal) "avg",sum(sal) "total sal",deptno "tot sal" from emp group by deptno;
select * from dept;





