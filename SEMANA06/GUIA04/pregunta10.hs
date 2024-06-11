--Elabora una función que reciba una lista de tuplas de dos valores: nombre del empleado (String) y sueldo (float). Se quiere obtener una lista con los nombres de aquellos empleados con un sueldo mayor al sueldo minimo (s/ 1025)
--Ejemplo: [("Jaime",2000),("Luis",1000),("Renato",4000),("Cuto",10000)] => ["Jaime","Renato","Cuto"]

listaEmpleados :: [(String, Int)] = [("Jaime",2000),("Luis",1000),("Renato",4000),("Cuto",10000)]

empleadosMenorSueldo :: [(String, Int)] -> [String]
empleadosMenorSueldo listaEmpleados =
    map (\(nombre, _) -> nombre) (filter (\(_, sueldo) -> sueldo > 1025) listaEmpleados)
