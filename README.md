# Alpha Interpreter

A BASIC-style interpreter written in C++. Currently runs scripts as console applications. GUI scripts currently in development.

## Usage

```
alpha <filename>
```

## Current Commands

### Variable assignment

```
@<varname> = X
```

### General

```
If
EndIf
While
EndWhile
Cmd
EndCmd
Wait
```

### Console

```
ConsoleOut
ConsoleOutLn
ConsoleIn
MemoryDump
```

### GUI

```
CreateWindow
ShowWindow
HideWindow
```


## Example

### Script

```
Cmd loopMe()
	@foo = 1
	While(@foo < 10)
		ConsoleOutLn(@foo)
		@foo = @foo + 1
	EndWhile
EndCmd

loopMe()
```

### Output

```
Alpha Interpreter v 0.1
1
2
3
4
5
6
7
8
9

```