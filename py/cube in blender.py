import Blender
from Blender import *
def makeCube(x,y,name,passedMesh,passedScene):
 ob = Object.New("Mesh",name)
 ob.LocX=x
 ob.LocY=y
 
 ob.link(passedMesh)
 passedScene.link(ob)
 return ob
 
#Create a single cube.
localScene = Scene.GetCurrent()
tempMesh = Mesh.Primitives.Cube(1)
tempCube = makeCube(0,0,"myCube",tempMesh,localScene)
Redraw(-1)
