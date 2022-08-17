-- --1번문제
-- select *
-- from emp
-- where length(ename) = 5 and ename like '_A___';

-- -- 2번문제
-- select empno, ename, hiredate
-- from emp
-- where empno > 7800

-- -- 3번문제
-- select substring(lower(ename),1,3)
-- from emp
-- where empno > 7800 

-- -- 4번문제 
-- select e.empno, e.ename, d.dname
-- from emp as e
--     inner join dept as d
-- where e.depno = 20 and e.job in (select job
--                                  from emp
--                                  where e.depno = 10);

-- -- 5번 문제
-- select e.deptno, d.dname, count(e.empno) 사원수, avg(e.sal) 급여평균
-- from emp e left outer join dept d on e.deptno = d.deptno
-- group by e.deptno, d.dname
-- having avg(e.sal) >= 1000 AND count(empno) >= 4

-- -- 6번 문제
-- select empno, ename, ((sal*12)+ coalesce(comm, 0)) 연봉
-- from emp
-- order by 연봉 desc;

-- -- 7번 문제
-- select job, round(avg(sal),2) as AVG_SAL, 
-- case when avg(sal) <= 1000 then 'POOR'
--          when 1000 < avg(sal) and avg(sal) <= 1500 then 'WELL'
--          when 1500 < avg(sal) and avg(sal) < 3000 then 'GOOD'
--          when avg(sal) >= 3000 then 'Excellent'          
--            end as grade
-- from emp, salgrade s
-- where mgr is not null
-- group by job
-- order by AVG_SAL asc;

-- -- 8번 문제
-- select empno, ename, mgr
-- from emp
-- where mgr = 7566;