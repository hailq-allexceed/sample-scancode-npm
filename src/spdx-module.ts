/* SPDX-License-Identifier: MIT */
// SPDX-FileCopyrightText: 2024 Sample Project Contributors

export interface User {
  id: number;
  name: string;
  email: string;
}

export function createUser(id: number, name: string, email: string): User {
  return { id, name, email };
}

export function formatUser(user: User): string {
  return `[${user.id}] ${user.name} <${user.email}>`;
}
