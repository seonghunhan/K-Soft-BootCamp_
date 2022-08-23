import psycopg2


class Database():
    def __init__(self, host = '127.0.0.1', dbname='tabledb', user='postgres', password = 'sora0304', port=54322) :
        self.db = psycopg2.connect(
                host = host, dbname=dbname,
                user=user,password = password,
                port=port)
        
        self.cursor = self.db.cursor()
    # def __init__(self):
    #     self.db = psycopg2.connect(
    #             host = '127.0.0.1',dbname='tabledb',
    #             user='postgres',password = 'postgres',
    #             port=5432)
        
    #     self.cursor = self.db.cursor()

    
    def __del__(self):
        self.db.close()
        self.cursor.close()
    

    def execute(self,query,args={}):
        self.cursor.execute(query, args)
        row = self.cursor.fetchall()
        return row

    
    def commit(self):
        self.cursor.commit()


class CRUD(Database):
    def __init__(self):
        super(CRUD,self).__init__()

    def create_table(self,table):
        sql = f'CREATE TABLE IF NOT EXISTS {table} ( id serial, name char(8));'
        try:
            self.cursor.execute(sql)
            self.db.commit()
        except Exception as e :
            print(" insert DB err ",e) 



    
    def readDB(self,table,colum):
        sql = f" SELECT {colum} from {table}"
        try:
            self.cursor.execute(sql)
            result = self.cursor.fetchall()
        except Exception as e :
            result = (" read DB err",e)
        
        return result

    def insertDB(self,table,colum,data):
        sql = f" INSERT INTO {table}({colum}) VALUES ('{data}') ;"
        try:
            self.cursor.execute(sql)
            self.db.commit()
        except Exception as e :
            print(" insert DB err ",e) 


    def updateDB(self,table,colum,value,condition):
        sql = f" UPDATE {table} SET {colum}='{value}' WHERE {condition} "

        try :
            self.cursor.execute(sql)
            self.db.commit()
        except Exception as e :
            print(" update DB err",e)

    def deleteDB(self,table,condition):
        sql = f" delete from {table} where {condition} ; "
        try :
            self.cursor.execute(sql)
            self.db.commit()
        except Exception as e:
            print( "delete DB err", e)


if __name__ =='__main__':
    t_name = 'test_t'

    db_con = CRUD()
    db_con.create_table(t_name)
    db_con.insertDB(t_name,'name','홍길동')
    db_con.insertDB(t_name,'name','누군가')
    
    result = db_con.readDB(t_name,'*')
    print('insert 결과 ',result)
    db_con.updateDB(t_name, 'name','이문형','id = 1')
    result = db_con.readDB(t_name,'*')
    print('update 결과 ',result)
    db_con.deleteDB(t_name, "name = '누군가'")
    result = db_con.readDB(t_name,'*')
    print('delete 결과 ',result)