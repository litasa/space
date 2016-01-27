#version 400 core

//layout (location=0) smooth out vec4 vFragColor;	//fragment shader output
smooth in vec4 oColor;							//colour varying from the vertex shader

void main()
{ 		
	//The equation is sqrt(dot(gl_PointCoord-0.5,gl_PointCoord-0.5))>0.5
	//square bth sides gives this.
	//We discard the fragments outside the sphere
	if(dot(gl_PointCoord-0.5,gl_PointCoord-0.5)>0.25)	
		discard;
	else
		gl_FragColor = oColor;  
}