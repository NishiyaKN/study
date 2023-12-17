### History
`history 10` will output the last 10 commands run
`!102` will execute the 102th command on the history
`!-3` will execute the third most recent command
`!ls` will execute the last ls command (such as `ls -l /etc`)

### Environment variables
`unset` can remove exported variables

### Alias
`alias` outputs all aliases currently available
`type -a ls` if aliased, outputs it's alias and the path to the command
`which -a ls` if aliased, outputs it's alias and the path to the command, and the command which is being aliased