#!/bin/bash

# Define backup destination directory
backup_dir="/var/opt/gitlab/backups"

# Echo message before creating backup
echo "Creating GitLab backup..."
/opt/gitlab/bin/gitlab-backup create
echo "GitLab backup created."

# Echo message before deleting old backups
echo "Deleting backups older than 7 days..."
find "${backup_dir}" -type f -name "*.tar" -mtime +7 -exec rm -f {} \;
echo "Old backups deleted."

# Echo message before setting permissions
echo "Setting permissions for backup directory..."
chmod -R 777 "${backup_dir}";
echo "Permissions set for backup directory."

# Echo message before transferring files to NAS
echo "Transferring backup files to NAS..."

# Use sshpass to provide password for SCP
sshpass -p '5@dxuF93' scp -r "${backup_dir}" localadmin@192.168.84.111:/volume1/Git
echo "Backup files transferred to NAS."
