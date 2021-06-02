# VimCommandSheet

## Setup/Basics
- showlinenumbers:":setnumber"
- togglelinewrap:":setwrap!"
- setcolorscheme:":colorscheme[theme]",":colo[theme]"
    -NOTE:tobrowse,type":colo(rscheme)[SPACE][TAB]"
    -light:`morning`
    -dark:`elflord`
    -solarizeddark:`desert`
- closefile,nosave:":q!"
- closefile,save:":wq"
- savefile,don'tclose:":w"
- restartfilefromlastsave:":e!"
- repeatacommand*x*times:":[x][command]"

## Navigation
- jumptoendoffile:":$","G"
- jumptoendofline:"$"
- nexttab:"gt"
- previoustab:"gT"
- jumptobeginningoffile:"gg","1G"
- jumptobeginningofline:"0"
- jumptoline:"[linenumber]G"
- jumpforwardbyword:"w"
- jumpbackwardbyword:"b"
- jumpforwardtoendsofwords:"e"
- jumpbackwardtoendsofwords:"ge"
- jumptonextinstanceof*x*characterinline:"f[x]"
- jumptopreviousinstanceof*x*characterinline:"F[x]"

## Editing
- deleteline:"dd"
- deleteword:"dw"
- replacecharacter:"r[charactertouseinstead]"
- deletecharacter:"x"
- opennewlinebelow+enterInsertMode:"o"
    -openlineabove+enterInsertMode:"O"
- enterInsertmodeinfrontofcursor:"a"
- indent/outdent:">>/<<"

## FileBrowsing
- opennetrw(filebrowser):":Explore"
- opennetrwindirectorytreemode:":Lexplore"
- changeviewofdirectory:"i"
## Folding
- togglefold:"za"
- unfoldall:"zR"
- foldall:"zM"

## BuffersandTabs
- splithorizontally:":split"
- splitvertically:":vsplit"
- newtab:"tabnew"
- newtabwithfile:":tabedit[filename]"
- closetab:":tabclose"
- closeallothertabs:":tabonly"
- listbuffers:"ls"
- deletecurrentbuffer:":bd"
    -overridefilechanges:":bd!"

## Miscellaneous
- openterminal:":terminal"
    
## Tetris
Steps to play Tetris in Vim:
1. `:source tetris.vim`
2. `\te`
Enjoy!
    
  
  

