functor
import
   Open
   Application
define
   F
in
   F={New Open.file
       init(name:  'test0.res'
	    flags: [write create]
	    mode:  mode(owner: [read write]
			group: [read write]))}
   {F write(vs: 'Hello World !')}
   {F close}
   {Application.exit 0}
end